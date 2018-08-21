/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDMessageServicesCenter : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_disconnect;
-(void)_disconnected;
-(BOOL)_connect;
-(void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 handler:(/*^block*/id)arg4 ;
-(void)_requestExpireStateWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestWatchdogWithGUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)requestRoutingWithCompletion:(/*^block*/id)arg1 ;
-(void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestExpireStateWithCompletion:(/*^block*/id)arg1 ;
-(void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestWatchdogWithCompletion:(/*^block*/id)arg1 ;
@end
