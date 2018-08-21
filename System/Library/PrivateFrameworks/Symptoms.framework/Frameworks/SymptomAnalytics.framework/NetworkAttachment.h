/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, NSData, NSSet;

@interface NetworkAttachment : NSManagedObject

@property (nonatomic,retain) NSDate * firstTimeStamp; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL isKnownGood; 
@property (assign,nonatomic) BOOL isLowInternetUL; 
@property (assign,nonatomic) BOOL isLowInternetDL; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSData * netSignature; 
@property (nonatomic,retain) NSNumber * overallStayMean; 
@property (nonatomic,retain) NSNumber * overallStayVar; 
@property (nonatomic,retain) NSString * service; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSNumber * velo; 
@property (assign,nonatomic) BOOL wasLastFailed; 
@property (nonatomic,retain) NSNumber * attrs; 
@property (nonatomic,retain) NSSet * hasDefaultRoute; 
@property (nonatomic,retain) NSSet * supportsFlows; 
@end

