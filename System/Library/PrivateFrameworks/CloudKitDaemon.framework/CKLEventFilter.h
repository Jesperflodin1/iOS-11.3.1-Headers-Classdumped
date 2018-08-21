/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CKLEventFilter : NSObject {

	BOOL _simulatorMessagesOnly;
	unsigned long long _logTypes;
	NSString* _processName;
	NSDictionary* _categoriesBySubsystem;

}

@property (assign,nonatomic) unsigned long long logTypes;                       //@synthesize logTypes=_logTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesBySubsystem;              //@synthesize categoriesBySubsystem=_categoriesBySubsystem - In the implementation block
@property (nonatomic,retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL simulatorMessagesOnly;                        //@synthesize simulatorMessagesOnly=_simulatorMessagesOnly - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)setSimulatorMessagesOnly:(BOOL)arg1 ;
-(BOOL)simulatorMessagesOnly;
-(BOOL)matchesEvent:(id)arg1 ;
-(unsigned long long)logTypes;
-(BOOL)hasLogType:(unsigned long long)arg1 ;
-(BOOL)hasOnlyLogType:(unsigned long long)arg1 ;
-(void)_initFilterDict;
-(void)setLogTypes:(unsigned long long)arg1 ;
-(NSDictionary *)categoriesBySubsystem;
-(void)setCategoriesBySubsystem:(NSDictionary *)arg1 ;
@end

