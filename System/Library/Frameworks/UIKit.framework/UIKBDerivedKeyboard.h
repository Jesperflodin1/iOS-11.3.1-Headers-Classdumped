/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface UIKBDerivedKeyboard : NSObject {

	NSString* _derivedKBStarPrefixName;
	CGSize _keyboardSize;

}

@property (assign,nonatomic) CGSize keyboardSize;                           //@synthesize keyboardSize=_keyboardSize - In the implementation block
@property (nonatomic,copy) NSString * derivedKBStarPrefixName;              //@synthesize derivedKBStarPrefixName=_derivedKBStarPrefixName - In the implementation block
-(CGSize)keyboardSize;
-(void)setKeyboardSize:(CGSize)arg1 ;
-(NSString *)derivedKBStarPrefixName;
-(void)setDerivedKBStarPrefixName:(NSString *)arg1 ;
@end

