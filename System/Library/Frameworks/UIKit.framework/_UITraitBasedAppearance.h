/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIAppearance.h>

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {

	UITraitCollection* _traitCollection;

}
+(id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(BOOL)_hasAnyCustomizations;
+(BOOL)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3 ;
+(void)_setHasAnyCustomizations;
-(void)dealloc;
-(id)_traitCollection;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
@end

