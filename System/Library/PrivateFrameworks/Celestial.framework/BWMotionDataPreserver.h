/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, NSMutableData;

@interface BWMotionDataPreserver : NSObject {

	NSString* _name;
	NSMutableData* _preservedISPMotionData;
	NSMutableData* _preservedISPHallData;
	NSString* _currentISPHallPortType;

}
+(void)initialize;
-(BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_preserveMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 willBeDropped:(BOOL)arg2 ;
-(void)dealloc;
-(void)reset;
-(id)initWithName:(id)arg1 ;
@end

