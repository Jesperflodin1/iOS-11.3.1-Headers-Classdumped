/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUNetworkReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFi;

}

@property (nonatomic,readonly) BOOL connectionRequired; 
@property (nonatomic,readonly) long long status; 
+(id)networkReachabilityWithHostName:(id)arg1 ;
+(id)networkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)networkReachabilityForDocumentResources;
+(id)networkReachabilityForInternetConnection;
+(id)networkReachabilityForLocalWiFi;
+(long long)networkReachabilityStatusForDocumentResources;
+(long long)networkReachabilityStatusForInternetConnection;
+(long long)networkReachabilityStatusForLocalWiFi;
-(id)init;
-(void)dealloc;
-(long long)status;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
@end

