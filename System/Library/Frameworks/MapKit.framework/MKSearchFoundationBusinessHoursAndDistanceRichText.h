/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKSearchFoundationRichText.h>

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText {

	BOOL _businessHoursResolved;
	BOOL _distanceResolved;

}

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved;              //@synthesize businessHoursResolved=_businessHoursResolved - In the implementation block
@property (getter=isDistanceResolved) BOOL distanceResolved;                        //@synthesize distanceResolved=_distanceResolved - In the implementation block
-(BOOL)isRichTextResolved;
-(void)resolveDistanceNotFound;
-(void)resolveDistanceString:(id)arg1 lines:(id)arg2 ;
-(void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2 ;
-(BOOL)isBusinessHoursResolved;
-(void)setBusinessHoursResolved:(BOOL)arg1 ;
-(BOOL)isDistanceResolved;
-(void)setDistanceResolved:(BOOL)arg1 ;
@end

