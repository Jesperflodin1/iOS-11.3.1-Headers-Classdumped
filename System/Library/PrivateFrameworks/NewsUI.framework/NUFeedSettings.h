/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsUI/NewsUI-Structs.h>
@class UITraitCollection;

@interface NUFeedSettings : NSObject {

	UITraitCollection* _traitCollection;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(id)initWithBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
@end

