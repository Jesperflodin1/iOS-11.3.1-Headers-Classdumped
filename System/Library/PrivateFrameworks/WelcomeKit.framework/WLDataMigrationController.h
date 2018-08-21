/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLDataMigratorProtocol, WLDataMigrationDelegate;
@interface WLDataMigrationController : WLDaemonConnection {

	id<WLDataMigratorProtocol> _migrator;
	unsigned long long _dataTypes;
	id<WLDataMigrationDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long dataTypes;                             //@synthesize dataTypes=_dataTypes - In the implementation block
@property (nonatomic,__weak,readonly) id<WLDataMigrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WLDataMigrationDelegate>)delegate;
-(unsigned long long)dataTypes;
-(void)cancelMigration;
-(void)startMigration;
-(id)initWithDataTypes:(unsigned long long)arg1 delegate:(id)arg2 ;
@end

