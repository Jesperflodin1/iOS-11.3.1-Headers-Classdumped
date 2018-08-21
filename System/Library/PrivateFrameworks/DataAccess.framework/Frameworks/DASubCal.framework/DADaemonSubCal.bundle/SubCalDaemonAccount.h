/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DASubCal/SubCalAccount.h>

@protocol SubCalDaemonAccountDelegate;
@interface SubCalDaemonAccount : SubCalAccount {

	id<SubCalDaemonAccountDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SubCalDaemonAccountDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SubCalDaemonAccountDelegate>)delegate;
-(void)setDelegate:(id<SubCalDaemonAccountDelegate>)arg1 ;
-(BOOL)monitorFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(id)changeTrackingID;
-(void)_refresh:(BOOL)arg1 ;
-(id)storeExternalId;
-(void)subCalRefreshTask:(id)arg1 finishedWithError:(id)arg2 ;
-(void)subCalRefreshTask:(id)arg1 needsUsernamePasswordForHost:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)subCalRefreshTask:(id)arg1 didRedirectToURL:(id)arg2 ;
-(void)refreshAllCalendars:(BOOL)arg1 ;
-(BOOL)_calendarExistsOnParent;
@end
