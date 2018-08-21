/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol BPSWatchMigrationControllerDelegate;
@class BPSRemoteWatchView, BPSMultipleWatchMigrationView, MBSnapshot, NSArray;

@interface BPSWatchMigrationController : UIViewController {

	BOOL _iTunes;
	id<BPSWatchMigrationControllerDelegate> _migrationDelegate;
	BPSRemoteWatchView* _watchView;
	BPSMultipleWatchMigrationView* _multipleWatchView;
	MBSnapshot* _snapshot;
	NSArray* _migratableDevices;

}

@property (nonatomic,retain) BPSRemoteWatchView * watchView;                                                //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) BPSMultipleWatchMigrationView * multipleWatchView;                             //@synthesize multipleWatchView=_multipleWatchView - In the implementation block
@property (nonatomic,retain) MBSnapshot * snapshot;                                                         //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) NSArray * migratableDevices;                                                   //@synthesize migratableDevices=_migratableDevices - In the implementation block
@property (assign,nonatomic) BOOL iTunes;                                                                   //@synthesize iTunes=_iTunes - In the implementation block
@property (assign,nonatomic,__weak) id<BPSWatchMigrationControllerDelegate> migrationDelegate;              //@synthesize migrationDelegate=_migrationDelegate - In the implementation block
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(MBSnapshot *)snapshot;
-(void)setSnapshot:(MBSnapshot *)arg1 ;
-(NSArray *)migratableDevices;
-(void)_notifyDelegateShouldMigrateWithData:(id)arg1 ;
-(void)_saveMigrationPreference:(BOOL)arg1 ;
-(void)setMigratableDevices:(NSArray *)arg1 ;
-(id<BPSWatchMigrationControllerDelegate>)migrationDelegate;
-(BOOL)shouldBeDisplayedGivenMigrationData:(id)arg1 ;
-(void)setMigrationDelegate:(id<BPSWatchMigrationControllerDelegate>)arg1 ;
-(BPSMultipleWatchMigrationView *)multipleWatchView;
-(void)setMultipleWatchView:(BPSMultipleWatchMigrationView *)arg1 ;
-(BOOL)iTunes;
-(void)setITunes:(BOOL)arg1 ;
-(id)initWithSnapshot:(id)arg1 ;
-(void)setWatchView:(BPSRemoteWatchView *)arg1 ;
-(BPSRemoteWatchView *)watchView;
@end

