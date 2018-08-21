/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort

@property (nonatomic,readonly) TSgPTPPortStatistics * statistics; 
@property (nonatomic,readonly) char localPDelayLogMeanInterval; 
@property (nonatomic,readonly) char remotePDelayLogMeanInterval; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
-(TSgPTPPortStatistics *)statistics;
-(char)localPDelayLogMeanInterval;
-(char)remotePDelayLogMeanInterval;
@end

