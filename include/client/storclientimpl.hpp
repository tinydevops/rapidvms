
#ifndef __VSC_STOR_CLIENT_IMPL_H_
#define __VSC_STOR_CLIENT_IMPL_H_

inline StorClient::StorClient(VidStor &stor, StorFactoryNotifyInterface &pNotify)
:m_stor(stor)
{
	StartStorClient();
}

inline StorClient::~StorClient()
{
	StopStorClient();
}

/* Start Stop Refresh the Stor client Thread */
inline bool StorClient::StartStorClient()
{
	start();
}
inline bool StorClient::StopStorClient()
{
	m_Quit = true;
}

VidCameraList StorClient::GetVidCameraList()
{
	return m_cCamList;
}

inline void StorClient::run()
{
	XRef<XSocket> pSocket = new XSocket;

	OAPIHeader header;
	int frameCnt =0;
	char *pRecv = NULL;
	int nRecvLen = 0;
	s32 nRet = 0;
	ck_string ckPort = m_stor.strport();

	u16 Port = ckPort.to_uint16(10);

	while(m_Quit != true)
	{
		try
		{
			XSDK::XString host = m_stor.strip();
			pSocket->Connect(host, Port);
			
			oapi::DeviceListRsp list;
			OAPIClient pClient(pSocket);
			
			pClient.Setup(m_stor.struser(), m_stor.strpasswd(), "Nonce");
			
	
			pSocket->SetRecvTimeout(1 * 1000);
			while(m_Quit != true)
			{
				nRet = pSocket->Recv((void *)&header, sizeof(header));
				if (nRet != sizeof(header))
				{
					if (pSocket->Valid() == true)
					{
						continue;
					}else
					{
						break;
					}
				}
				//printf("%s---%d\n", __FILE__, __LINE__);

				header.version = ntohl(header.version);
				header.cmd = ntohl(header.cmd);
				header.length = ntohl(header.length);
				if (header.length > nRecvLen)
				{
					if (pRecv)
					{
						delete [] pRecv;
						pRecv = NULL;
					}
					pRecv = new char[header.length + 1];
					nRecvLen = header.length + 1;
				}
				
				s32 nRetBody = pSocket->Recv((void *)pRecv, header.length);
				if (nRetBody == header.length)
				{
					switch(header.cmd)
					{
						case OAPI_CMD_DEVICE_LIST_RSP:
						{
							oapi::OAPICameraListRsp list;
							pClient.ParseDeviceList(pRecv, header.length, list);
							emit UpdateDeviceListRsp(list);
							break;
						}
						case OAPI_CMD_LOGIN_RSP:
						{
							oapi::LoginRsp rsp;
							pClient.ParseLogin(pRecv, header.length, rsp);
							if (rsp.bRetNonce == true)
							{
								pClient.Setup(m_stor.struser(), 
										m_stor.strpasswd(), rsp.Nonce);
							}
							if (rsp.bRet == true)
							{
								/* login ok, send device list */
								pClient.SendDeviceListRequest();
							}
							break;
						}
						case OAPI_CMD_FRAME_PUSH:
						{
							//printf("Go a new frame %d\n", frameCnt++);
							break;
						}
						case OAPI_NOTIFY_DEVICE_ADD:
							break;
						case OAPI_NOTIFY_DEVICE_DEL:
							break;
						case OAPI_NOTIFY_DEVICE_ONLINE:
							break;
						case OAPI_NOTIFY_DEVICE_OFFLINE:
							break;
						case OAPI_NOTIFY_DEVICE_RECORDING_ON:
							break;
						case OAPI_NOTIFY_DEVICE_RECORDING_OFF:
							break;
						case OAPI_NOTIFY_DEVICE_GROUP_CHANGE:
							break;
						default:
							break;		
					}
				}

			}

		}
		catch( XSDK::XException& ex )
		{
			
		}

	}

}

#endif /* __VSC_STOR_CLIENT_IMPL_H_ */