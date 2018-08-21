/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@interface HMDEducationModeMessageFilter : HMDMessageFilter {

	BOOL _ephemeralMultiUser;
	BOOL _managedAppleID;

}

@property (assign,getter=isEphemeralMultiUser,nonatomic) BOOL ephemeralMultiUser;              //@synthesize ephemeralMultiUser=_ephemeralMultiUser - In the implementation block
@property (assign,getter=isManagedAppleID,nonatomic) BOOL managedAppleID;                      //@synthesize managedAppleID=_managedAppleID - In the implementation block
-(BOOL)isEphemeralMultiUser;
-(void)dealloc;
-(void)_update;
-(id)initWithName:(id)arg1 ;
-(BOOL)isManagedAppleID;
-(void)handleActiveAccountChanged:(id)arg1 ;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(void)setManagedAppleID:(BOOL)arg1 ;
-(void)setEphemeralMultiUser:(BOOL)arg1 ;
@end
