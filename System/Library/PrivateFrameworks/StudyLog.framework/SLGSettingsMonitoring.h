/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLGSettingsMonitoring <NSObject>
@property (assign,nonatomic,__weak) id<SLGSettingsMonitorDelegate> delegate; 
@property (assign,getter=isEnabled,nonatomic) BOOL Enabled; 
@required
-(id<SLGSettingsMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1;

@end

