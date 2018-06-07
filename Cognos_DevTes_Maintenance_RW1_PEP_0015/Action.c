Action()
{
	lr_start_transaction("001_Cognos_Maintenance_Launch");


	web_url("cognos.cgi", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ps/login/images/login_header.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../ps/login/images/login_ibm_logo.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../ps/login/images/login_icon.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		LAST);
	
	lr_end_transaction("001_Cognos_Maintenance_Launch", LR_AUTO);


	lr_think_time(20);

	lr_start_transaction("002_Cognos_Maintenance_Login");

	web_submit_form("cognos.cgi_2", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=CAMUsername", "Value={UserID}", ENDITEM, 
		"Name=CAMPassword", "Value={Password}", ENDITEM, 
		LAST);

	web_url("cognos.cgi_3", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../skins/corporate/shared/banner.css", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../ps/portal/images/action_search_ani.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/branding/ibm-logo-white.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/branding/your_logo_here.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/shared/images/tool_sep_dot_line_banner.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/shared/images/toolbar_divider.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../ps/portal/images/action_paste.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/portal/images/action_go_ani.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/shared/images/action_scroll_right_disabled.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/shared/images/action_scroll_left_disabled.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../ps/portal/images/checkmark.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/branding/tools_dashboard.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/branding/tools_query_studio.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_end_transaction("002_Cognos_Maintenance_Login",LR_AUTO);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=1CB5EA02470D4B8AB86E2D6353739000&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20180223; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=9e5e0eaeaf5d418499ee2644b8be4ce2&HASH=9e5e&LV=201805&V=4&LU=1527615480841; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("_ga=GA1.2.802176978.1527615481; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=3F544769E6D764BB04664C97E2D76224; DOMAIN=iecvlist.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	lr_start_transaction("003_Cognos_Maintenance_ClkonMaintenance");

	web_url("cognos.cgi_4", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/cc.xts&m_folder=i1B93573081994031B1004C11425DE991&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?m_folder=i64C1B8968BDC4C70B18C3DC1286D7E20&m_tab=i64C1B8968BDC4C70B18C3DC1286D7E20&b_action=xts.run&encoding=UTF-8&m=portal%2fcc.xts&m_folder2=m-i937E6052F9724D988EF69846A3CD4D2F", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("003_Cognos_Maintenance_ClkonMaintenance",LR_AUTO);

	lr_think_time(47);

	lr_start_transaction("004_Cognos_Maintenance_ClkonRW1_PEP_0015");

	web_link("Report View of RW1_PEP_0015 - Records corrections that result in change in risk to be updated within D+90 days", 
		"Text=Report View of RW1_PEP_0015 - Records corrections that result in change in risk to be updated within D+90 days", 
		"Snapshot=t22.inf", 
		EXTRARES, 
		"Url=../skins/corporate/viewer/QSRVCommon.css", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_run.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_keep_report.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/dis_action_drill_down.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/dis_action_drill_up.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/portal/images/dropdown_arrow_narrow.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_go_to.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_subscribe.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_comment_add.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_view_html.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../rv/images/action_add_report.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/viewer/images/tool_sep_dot_line.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../common/images/spacer.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		"Url=../skins/corporate/shared/images/action_return.gif", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", ENDITEM, 
		LAST);

	web_reg_find("Search=Body",
		"Text=RW1_PEP_0015 - Records corrections that result in change in risk to be updated within D+90 days",
		LAST);

	web_url("content", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi/repository/sid/cm/oid/i3754e42a09ca4118892b9d3bf3559081/content?cv.id=_THIS_", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/ibmcognos/reportstyles/images/silver_grad.png", "Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi/repository/sid/cm/oid/i3754e42a09ca4118892b9d3bf3559081/content?cv.id=_THIS_", ENDITEM, 
		LAST);

	lr_end_transaction("004_Cognos_Maintenance_ClkonRW1_PEP_0015",LR_AUTO);

	lr_think_time(162);

	lr_start_transaction("005_Cognos_Maintenance_Logout");

	web_url("cognos.cgi_5", 
		"URL=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=xts.run&m=portal/logoff.xts&h_CAM_action=logoff", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/ibmcognos/cgi-bin/cognos.cgi?b_action=cognosViewer&ui.action=view&ui.object=defaultOutput(%2fcontent%2ffolder%5b%40name%3d%27Maintenance%27%5d%2freportView%5b%40name%3d%27Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days%27%5d)&ui.name="
		"Report%20View%20of%20RW1_PEP_0015%20-%20Records%20corrections%20that%20result%20in%20change%20in%20risk%20to%20be%20updated%20within%20D%2b90%20days&ui.format=HTML&ui.backURL=%2fibmcognos%2fcgi-bin%2fcognos.cgi%3fb_action%3dxts.run%26m%3dportal%2fcc.xts%26m_folder%3di1B93573081994031B1004C11425DE991%26m_folder2%3dm-i937E6052F9724D988EF69846A3CD4D2F", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("005_Cognos_Maintenance_Logout",LR_AUTO);

	return 0;
}