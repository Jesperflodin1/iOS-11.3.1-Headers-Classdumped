/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:08 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppStoreKit.PendingPageRender : _UKNOWN_SUPERCLASS_ {

	 storeDataProvider;
	 gate;
	 xpSessionDuration;
	 xpSamplingPercentageUsers;
	 hasEvent;
	 event;
	 hasRequestedTime;
	 requestedTime;
	 hasAppearTime;
	 appearTime;
	 disappearTime;
	 resourceRequestStartTime;
	 resourceRequestOnScreenEndTime;
	 resourceRequestEndTime;
	 userReadyTime;
	 requests;
	 isLayoutReady;
	 hasViewModelPresentTime;
	 rootViewModelPresentTime;
	 resourceLoader;
	 hasInitialRequestEndTime;
	 initialRequestEndTime;
	 hasRequests;
	 hasUserReadyTime;
	 hasNetworkQualityReports;
	 networkQualityReports;
	 networkQualityInquiry;
	 errors;
	 didPost;

}
-(void)loaderDidBeginLoading:(id)arg1 ;
-(void)loaderDidLoadAllForReason:(id)arg1 ;
-(void)loaderDidIdle:(id)arg1 ;
@end

