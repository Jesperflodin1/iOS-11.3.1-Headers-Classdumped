/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* _badgeTextAttributesForState;
	UIColor* _badgeColor;
	UIOffset _titleOffset;

}

@property (assign,nonatomic) UIOffset titleOffset;              //@synthesize titleOffset=_titleOffset - In the implementation block
@property (nonatomic,copy) UIColor * badgeColor;                //@synthesize badgeColor=_badgeColor - In the implementation block
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(void)enumerateBadgeTextAttributesWithBlock:(/*^block*/id)arg1 ;
-(UIOffset)titleOffset;
-(void)setTitleOffset:(UIOffset)arg1 ;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
@end

