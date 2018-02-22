Action()
{
	lr_think_time(10);

	lr_start_transaction("Homepage");

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("tuuid=a9f6def4-55fd-48a7-9c7c-7d3a36e66158; DOMAIN=d.company-target.com");

	web_add_cookie("tuuid=6523f1ce-bcbb-41a4-b2e3-cc1fd62c2e40; DOMAIN=d.company-target.com");

	web_url("showLogin", 
		"URL=https://login.software.microfocus.com/msg/actions/showLogin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../css/fonts/ui-framework-rebranding-icons.woff", ENDITEM, 
		"Url=../css/fonts/OpenSans-Regular.eot", ENDITEM, 
		"Url=../js/lib/emailValidator.js?_=1515491680368", ENDITEM, 
		"Url=../css/fonts/OpenSans-Bold.ttf", ENDITEM, 
		"Url=../public/getProdName", ENDITEM, 
		"Url=../css/fonts/OpenSans-Light.eot", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-KPNTJD", ENDITEM, 
		"Url=https://dnn506yrbagrg.cloudfront.net/pages/scripts/0026/8250.js?420969", ENDITEM, 
		"Url=https://connect.facebook.net/en_US/fbevents.js", ENDITEM, 
		"Url=https://scripts.demandbase.com/78d5096f.min.js", ENDITEM, 
		"Url=https://static.woopra.com/js/w.js", ENDITEM, 
		"Url=https://static.hotjar.com/c/hotjar-128925.js?sv=5", ENDITEM, 
		"Url=https://js.idio.co/885.js", ENDITEM, 
		"Url=https://connect.facebook.net/signals/config/1056169674513767?v=2.8.7&r=stable", ENDITEM, 
		"Url=https://snap.licdn.com/li.lms-analytics/insight.min.js", ENDITEM, 
		"Url=https://d.company-target.com/ul_cb/pixel?type=js&id=1498087033&page=https%3A%2F%2Flogin.software.microfocus.com%2Fmsg%2Factions%2FshowLogin", ENDITEM, 
		"Url=https://d.company-target.com/ul_cb/pixel?type=js&id=1498087013&page=https%3A%2F%2Flogin.software.microfocus.com%2Fmsg%2Factions%2FshowLogin", ENDITEM, 
		"Url=https://www.woopra.com/track/ce/?ra=BdndIM8YFpKh&alias=hpesoftware.com&instance=woopra&ka=24000&meta=&screen=1301x731&language=en-US&app=js-client&referer=&idle=0&vs=r&cookie=RFIuSxermb4j&event=pv&ce_url=%2Fmsg%2Factions%2FshowLogin&ce_title=Login%20-%20MyAccount&ce_domain=login.software.microfocus.com&ce_uri=https%3A%2F%2Flogin.software.microfocus.com%2Fmsg%2Factions%2FshowLogin", ENDITEM, 
		"Url=https://s.idio.co/ia.js", ENDITEM, 
		"Url=https://api.idio.co/1.0/content/_filter?query=_exists_%3Amain_image%20AND%20_exists_%3Ametadata.tags.idio.published_time%20AND%20_exists_%3Ametadata.tags.idio.author_image%20AND%20metadata.tags.idio.published_time%3A%5Bnow-180d%20TO%20now%5D&include_topics&callback=idio.check1&key=17O7J1DM8OBZHNYW5S4Q&_method=post&rpp=4&record=pending", ENDITEM, 
		"Url=https://script.hotjar.com/modules-52a74a80aa97e0d27b27cd2305518927.js", ENDITEM, 
		"Url=https://api.idio.co/1.0/content/_filter?query=_exists_%3Amain_image&include_topics&callback=idio.check0&key=9LXEXT11W7Z1YGDX0NCB&_method=post&rpp=3&record=pending", ENDITEM, 
		"Url=https://a.idio.co/ia.gif?r=&s=f589bd6c-2f93-48ba-89ff-37cc40225242&x%5Bidio_visitor_id%5D%5B0%5D=2bee4508-b3eb-4072-8e74-11710997e8b4&c=hpesoftware&d=885&a=consume&u=https%3A%2F%2Flogin.software.microfocus.com%2Fmsg%2Factions%2FshowLogin&l=1515491696820&z=0.6912992265088019", ENDITEM, 
		LAST);
	lr_end_transaction("Homepage", LR_AUTO);


	return 0;
}