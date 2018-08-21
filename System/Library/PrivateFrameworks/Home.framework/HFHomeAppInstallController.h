/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDRequestObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NAFuture, ASDSystemAppRequest, NSMutableSet, LSApplicationProxy, NSString;

@interface HFHomeAppInstallController : NSObject <ASDRequestObserver, LSApplicationWorkspaceObserverProtocol> {

	NAFuture* _activeHomeAppDownloadFuture;
	ASDSystemAppRequest* _request;
	long long _lastReportedStatus;
	NSMutableSet* _statusUpdaters;

}

@property (nonatomic,readonly) LSApplicationProxy * appProxy; 
@property (nonatomic,retain) NAFuture * activeHomeAppDownloadFuture;              //@synthesize activeHomeAppDownloadFuture=_activeHomeAppDownloadFuture - In the implementation block
@property (nonatomic,retain) ASDSystemAppRequest * request;                       //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long lastReportedStatus;                        //@synthesize lastReportedStatus=_lastReportedStatus - In the implementation block
@property (nonatomic,readonly) NSMutableSet * statusUpdaters;                     //@synthesize statusUpdaters=_statusUpdaters - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setRequest:(ASDSystemAppRequest *)arg1 ;
-(id)init;
-(ASDSystemAppRequest *)request;
-(void)_cleanup;
-(long long)status;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(BOOL)_isHomeAppInstalled;
-(LSApplicationProxy *)appProxy;
-(long long)lastReportedStatus;
-(NAFuture *)activeHomeAppDownloadFuture;
-(NSMutableSet *)statusUpdaters;
-(void)setActiveHomeAppDownloadFuture:(NAFuture *)arg1 ;
-(void)_dispatchStatusUpdate:(long long)arg1 ;
-(void)setLastReportedStatus:(long long)arg1 ;
-(void)request:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)downloadHomeAppWithUpdateBlock:(/*^block*/id)arg1 ;
@end

