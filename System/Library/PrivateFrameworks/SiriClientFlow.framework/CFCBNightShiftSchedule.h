/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class CFCBNightShiftTransitionTime, NSString;

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>

@property (nonatomic,retain) CFCBNightShiftTransitionTime * fromTime; 
@property (nonatomic,retain) CFCBNightShiftTransitionTime * toTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftSchedule;
+(id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(CFCBNightShiftTransitionTime *)fromTime;
-(CFCBNightShiftTransitionTime *)toTime;
-(void)setFromTime:(CFCBNightShiftTransitionTime *)arg1 ;
-(void)setToTime:(CFCBNightShiftTransitionTime *)arg1 ;
@end

