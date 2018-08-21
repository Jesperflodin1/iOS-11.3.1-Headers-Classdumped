/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, Process;

@interface LiveUsage : NSManagedObject

@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSNumber * tag; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSNumber * wifiIN; 
@property (nonatomic,retain) NSNumber * wifiOUT; 
@property (nonatomic,retain) NSNumber * wwanIN; 
@property (nonatomic,retain) NSNumber * wwanOUT; 
@property (nonatomic,retain) NSNumber * wiredIN; 
@property (nonatomic,retain) NSNumber * wiredOUT; 
@property (nonatomic,retain) NSNumber * metadata; 
@property (nonatomic,retain) Process * hasProcess; 
@property (nonatomic,retain) Process * hintedBy; 
@property (nonatomic,retain) NSNumber * xIN; 
@property (nonatomic,retain) NSNumber * xOUT; 
@property (nonatomic,retain) NSNumber * allFlows; 
@property (nonatomic,retain) NSNumber * jumboFlows; 
@property (nonatomic,retain) NSDate * billCycleEnd; 
@end

