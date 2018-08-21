/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLUILayoutIconView.h>
#import <CarouselLayoutSettings/CSLUICalendarIconObserver.h>

@class UIImageView, NSString;

@interface CSLUILayoutCalendarView : CSLUILayoutIconView <CSLUICalendarIconObserver> {

	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)calendarIconSource:(id)arg1 updatedIcon:(id)arg2 circularIcon:(id)arg3 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

