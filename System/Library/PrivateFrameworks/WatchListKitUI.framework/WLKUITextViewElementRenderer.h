/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKitUI/WatchListKitUI-Structs.h>
@class TVTextElement;

@interface WLKUITextViewElementRenderer : NSObject {

	TVTextElement* _element;
	CGSize _size;

}

@property (nonatomic,retain) TVTextElement * element;              //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) CGSize size;                          //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CGSize)textSize;
-(TVTextElement *)element;
-(void)setElement:(TVTextElement *)arg1 ;
-(id)initWithElement:(id)arg1 ;
-(void)drawElementInRect:(CGRect)arg1 ;
@end

