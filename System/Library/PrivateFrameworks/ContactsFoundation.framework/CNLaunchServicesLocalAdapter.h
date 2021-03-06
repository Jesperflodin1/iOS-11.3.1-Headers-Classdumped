/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNLaunchServicesAdapter.h>

@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter> {

	LSApplicationWorkspace* _workspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
+(id)lsApplicationWorkspaceForBundleId:(id)arg1 ;
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(LSApplicationWorkspace *)workspace;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
@end

