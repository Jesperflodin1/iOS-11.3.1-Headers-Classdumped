/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface DiagnosticCaseUsage : NSManagedObject

@property (nonatomic,retain) NSString * domain; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * subtype; 
@property (nonatomic,retain) NSString * process; 
@property (nonatomic,retain) NSDate * lastSeen; 
@property (nonatomic,retain) NSDate * lastAccepted; 
@property (assign,nonatomic) int casesSeen; 
@property (assign,nonatomic) int casesAccepted; 
@property (assign,nonatomic) double interarrival_mean; 
@property (assign,nonatomic) double interarrival_var; 
@end
