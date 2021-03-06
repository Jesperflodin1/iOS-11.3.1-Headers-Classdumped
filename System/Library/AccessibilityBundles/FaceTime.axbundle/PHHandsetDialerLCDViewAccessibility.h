/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:10 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/FaceTime.axbundle/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/__PHHandsetDialerLCDViewAccessibility_super.h>

@interface PHHandsetDialerLCDViewAccessibility : __PHHandsetDialerLCDViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)deleteCharacter;
-(id)initWithFrame:(CGRect)arg1 forDialerType:(int)arg2 ;
-(void)_voStatusChanged:(id)arg1 ;
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 ;
-(void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)hasText;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilitySubviews;
-(double)_accessibilityAllowedGeometryOverlap;
@end

