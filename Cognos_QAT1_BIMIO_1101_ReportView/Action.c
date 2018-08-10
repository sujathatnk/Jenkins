Action()
{
lr_start_transaction("_Cognos_QAT1_BIMIO_1101_ReportView");

lr_start_transaction("001_Cognos_QAT1_BIMIO_1101_ReportView_Launch");


	web_add_cookie("AWSALB=e7Zmj+UxpqltQ/as+2CdT9uAb8wrZjv0fqQ3iZb+x0pQNZ31Xb4Y2YF1KwJSdl1va2/QJew/iQ+ZMA5qtWz5oMy/3vB7aOegHxJ/9QcDeWFu0N5IEl31rlj6P/Or; DOMAIN={URL}");

	web_url("ibmcognos", 
		"URL=http://{URL}/ibmcognos", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/ibmcognos/ps/portal/images/splash/portal_splash_en.jpg", "Referer=http://{URL}/ibmcognos/", ENDITEM, 
		LAST);

	web_reg_find("Text=Log On to IBM Cognos Software", 
		LAST);

	web_add_cookie("AWSALB=B3KPpr5D7aZ88ImvQZ7raW/kVelDmdeiZMczfgsFIexefm7odUvCw67kIa8RRwBR4qpUNsMiV0drwYvAAQe+Oh3pKlGkB5/ExxM62UQypOac1Tb+I2bkL3vKM4oD; DOMAIN={URL}");

	web_url("cognos.cgi", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/main.xts&startwel=yes", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ps/login/images/login_header.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/main.xts&startwel=yes", ENDITEM, 
		"Url=../ps/login/images/login_ibm_logo.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/main.xts&startwel=yes", ENDITEM, 
		"Url=../ps/login/images/login_icon.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/main.xts&startwel=yes", ENDITEM, 
		LAST);
	
	lr_end_transaction("001_Cognos_QAT1_BIMIO_1101_ReportView_Launch", LR_AUTO);


	lr_start_transaction("002_Cognos_QAT1_BIMIO_1101_ReportView_Login");

	web_reg_find("Text=IBM Cognos Software", 
		LAST);

	lr_think_time(24);

	web_submit_form("cognos.cgi_2", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=CAMUsername", "Value={Username}", ENDITEM, 
		"Name=CAMPassword", "Value={Password}", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to IBM Cognos Software", 
		LAST);

	web_add_cookie("AWSALB=dKicJIM5LlRYAEGBym6Hx5nWNIX6L6IQDo8PglYIed6vDMbUAgJOLR9RCw2GuNITYt+ekFQwq2kTxEtzUpxu8Y1q6DfPGlWvxZ4x4t3fNFVjkSzqbvLp0pZ5tfo6; DOMAIN={URL}");

	web_add_cookie("AWSALB=Otwbr4XTqZoVJnPCyOBBb32KjomCclC5oOGis9tvY7um04/c5IJwFX8qF1jSWRK7GozS33jWLFuyObk7Pabc66t3Q3mx0ajm5YBaLoVPgHC8a272YwXlBHsfD7jN; DOMAIN={URL}");

	web_url("cognos.cgi_3", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/welcome/welcome.xts", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../skins/corporate/shared/banner.css", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/welcome/welcome.xts", ENDITEM, 
		"Url=../skins/corporate/branding/welcome_header_bar_tile.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/welcome/welcome.xts", ENDITEM, 
		"Url=../skins/corporate/branding/ibm_logo_67x23_White.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/welcome/welcome.xts", ENDITEM, 
		"Url=../ps/images/space.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/welcome/welcome.xts", ENDITEM, 
		LAST);

	lr_end_transaction("002_Cognos_QAT1_BIMIO_1101_ReportView_Login",LR_AUTO);

	lr_start_transaction("003_Cognos_QAT1_BIMIO_1101_ReportView_Myhome");

	web_reg_find("Text=IBM Cognos Software", 
		LAST);

	lr_think_time(13);

	web_url("cognos.cgi_4", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/main.xts", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/welcome/welcome.xts", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Public Folders - \n\t\t\t\t\t\t\tIBM Cognos Connection", 
		LAST);

	web_add_cookie("AWSALB=5lza6mrZwz+nIoGHHtJRc6KhSxs8frf9DYobojgNewIUbDi9pQBXa8d/uzleH2obeWPa4/+6CYxn6I6ildif4gpQSrqsUPyrv1VPZF46FJ1PGPFEuHSy82Gc6VDj; DOMAIN={URL}");

	web_add_cookie("AWSALB=LEXEssoI6bKMN+atSQ9UAAQNsE6L210CT7Z2Y5sFanF6xLg1e7rMBPB7DhybFfvynEHXKpkduiKiZFbyTC2PO954TFKLI3d4N13qa74elLuj43dk+1XweM+17AuH; DOMAIN={URL}");

	web_add_cookie("AWSALB=6UKTXmINYWCBvWBq4KT2eFGX2ol1qPQ/47euk/D3uzN7kya330IxbZjNUT5rVU7c2niBswob1Bu1n5EmOAqcXnd+k0eG3wpl7SM9d1iptPaVgz4DBYQJLQife9Vd; DOMAIN={URL}");

	web_add_cookie("AWSALB=sMBt2bnIMbk6e1JP1VfIvvn5yqefbDtC1+6UBGdvOaClxeRUGxKYRTUcu9YBAUyPNeLMljAnrSbuWrz1MgxuWNF45aYG6hD29dk635jILieNuczsbMdJJtH6ZC8P; DOMAIN={URL}");

	web_add_cookie("AWSALB=VTG3347u8syKonxcTzsWXyGOKIEU1BKcf4NUDPlg0iValmMkdeOJZzBZcJfKO9L3tCUHPZwPI5zdRFrg3lLLhMkPLuhYTPNxC6RE0T8J/bxg+VA7ZGCF9G7/cuBG; DOMAIN={URL}");

	web_url("cognos.cgi_5", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/main.xts", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../skins/corporate/branding/ibm-logo-white.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../ps/portal/images/action_search_ani.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/branding/your_logo_here.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/shared/images/tool_sep_dot_line_banner.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../ps/portal/images/action_paste.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/shared/images/toolbar_divider.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/portal/images/action_go_ani.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/shared/images/action_scroll_right_disabled.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/branding/tools_dashboard.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../ps/portal/images/checkmark.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/shared/images/action_scroll_left_disabled.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		"Url=../skins/corporate/branding/tools_query_studio.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&gohome=", ENDITEM, 
		LAST);

	lr_end_transaction("003_Cognos_QAT1_BIMIO_1101_ReportView_Myhome",LR_AUTO);

	lr_start_transaction("004_Cognos_QAT1_BIMIO_1101_ReportView_EmergencyFolder");

	web_reg_find("Text=Public Folders - \n\t\t\t\t\t\t\tIBM Cognos Connection", 
		LAST);

	lr_think_time(16);

	web_link("Emergency/Repair", 
		"Text=Emergency/Repair", 
		"Snapshot=t7.inf", 
		LAST);

	lr_end_transaction("004_Cognos_QAT1_BIMIO_1101_ReportView_EmergencyFolder",LR_AUTO);

	lr_start_transaction("005_Cognos_QAT1_BIMIO_1101_ReportView_Link");

	web_reg_find("Text=Report View of BIMIO 1011 - Team Request Per FCO - IBM Cognos Viewer", 
		LAST);

	web_add_cookie("AWSALB=tcHSlvG9lfkAgy0N6+Brb+TfpzfMmruSrCAZxVChuMIB0norgGmfiltangb/k4o6fwOS1ymZBS9PBhSNlpIPY878tRmT3rCUSL579NFeG999cJkoJ0GCSZAVFopG; DOMAIN={URL}");

	lr_think_time(18);

	web_link("Report View of BIMIO 1011 - Team Request Per FCO", 
		"Text=Report View of BIMIO 1011 - Team Request Per FCO", 
		"Snapshot=t8.inf", 
		EXTRARES, 
		"Url=../skins/corporate/viewer/QSRVCommon.css", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/dis_action_drill_down.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_keep_report.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_run.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../skins/corporate/portal/images/dropdown_arrow_narrow.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/dis_action_drill_up.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_go_to.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_view_html.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_add_report.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_subscribe.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../rv/images/action_comment_add.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../common/images/spacer.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../skins/corporate/viewer/images/tool_sep_dot_line.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		"Url=../skins/corporate/shared/images/action_return.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", ENDITEM, 
		LAST);

	web_reg_find("Text=Report title", 
		LAST);

	web_url("content", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi/repository/sid/cm/oid/i7444DFA99B094FAE922E98E73584E8E3/content?cv.id=_THIS_", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/img1", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi/repository/sid/cm/oid/i7444DFA99B094FAE922E98E73584E8E3/content?cv.id=_THIS_", ENDITEM, 
		"Url=/ibmcognos/reportstyles/images/silver_grad.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi/repository/sid/cm/oid/i7444DFA99B094FAE922E98E73584E8E3/content?cv.id=_THIS_", ENDITEM, 
		LAST);

	lr_end_transaction("005_Cognos_QAT1_BIMIO_1101_ReportView_Link",LR_AUTO);

	lr_start_transaction("006_Cognos_QAT1_BIMIO_1101_ReportView_Logoff");

	web_reg_find("Text=Log off", 
		LAST);

	lr_think_time(11);

	web_url("cognos.cgi_6", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/logoff.xts&h_CAM_action=logoff", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Emergency%2fRepair%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO%27%5d)&ui.name=Report%20View%20of%20BIMIO%201011%20-%20Team%20Request%20Per%20FCO&ui.format=HTML&ui.backURL="
		"%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di00E3EC2C095446D9AEE9BE3BE057FC7A", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("006_Cognos_QAT1_BIMIO_1101_ReportView_Logoff",LR_AUTO);
	
	lr_end_transaction("_Cognos_QAT1_BIMIO_1101_ReportView", LR_AUTO);


	return 0;
}