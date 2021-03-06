/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary;

@interface _MKLineHeaderModel : NSObject {

	NSMutableArray* _tokens;
	BOOL _shouldUseEmptyPlaceholder;
	NSDictionary* _fontAttribute;
	/*^block*/id _colorProvider;

}

@property (nonatomic,copy) NSDictionary * fontAttribute;                  //@synthesize fontAttribute=_fontAttribute - In the implementation block
@property (nonatomic,copy) id colorProvider;                              //@synthesize colorProvider=_colorProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldUseEmptyPlaceholder;              //@synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder - In the implementation block
-(id)init;
-(id)description;
-(id)colorProvider;
-(void)addToken:(id)arg1 ;
-(void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeToken:(id)arg1 ;
-(id)contentAttributedString;
-(id)_placeCardHeaderSeparatorString;
-(NSDictionary *)fontAttribute;
-(void)setFontAttribute:(NSDictionary *)arg1 ;
-(void)setColorProvider:(id)arg1 ;
-(BOOL)shouldUseEmptyPlaceholder;
-(void)setShouldUseEmptyPlaceholder:(BOOL)arg1 ;
@end

