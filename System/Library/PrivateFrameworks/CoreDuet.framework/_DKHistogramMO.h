/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSSet;

@interface _DKHistogramMO : NSManagedObject

@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamName; 
@property (nonatomic,copy) NSNumber * streamTypeCode; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSSet * value; 
+(id)fetchRequest;
@end

