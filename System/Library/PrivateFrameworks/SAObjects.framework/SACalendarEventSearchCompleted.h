/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * results; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)eventSearchCompleted;
+(id)eventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)eventSearchCompletedWithResults:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithResults:(id)arg1 ;
@end

