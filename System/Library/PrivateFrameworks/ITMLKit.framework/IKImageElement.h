/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSDictionary, NSURL, NSArray, UIColor;

@interface IKImageElement : IKViewElement {

	double _srcWidth;
	double _srcHeight;
	NSDictionary* _srcset;
	unsigned long long _imageType;
	double _aspectRatio;
	NSURL* _resolvedURL;
	NSArray* _srcsetRules;

}

@property (nonatomic,retain) NSURL * resolvedURL;                          //@synthesize resolvedURL=_resolvedURL - In the implementation block
@property (nonatomic,retain) NSArray * srcsetRules;                        //@synthesize srcsetRules=_srcsetRules - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSDictionary * srcset;               //@synthesize srcset=_srcset - In the implementation block
@property (nonatomic,retain,readonly) NSURL * placeholderURL; 
@property (nonatomic,readonly) unsigned long long imageType;               //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double aspectRatio;                         //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long position; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) long long fill; 
@property (nonatomic,readonly) long long reflect; 
+(BOOL)shouldParseChildDOMElements;
-(NSURL *)url;
-(long long)fill;
-(unsigned long long)position;
-(double)height;
-(UIColor *)borderColor;
-(double)width;
-(unsigned long long)imageType;
-(void)appDocumentDidMarkStylesDirty;
-(void)_parseSrcset:(id)arg1 ;
-(unsigned long long)_imageTypeForTagName:(id)arg1 ;
-(NSArray *)srcsetRules;
-(NSURL *)placeholderURL;
-(long long)reflect;
-(void)setResolvedURL:(NSURL *)arg1 ;
-(void)setSrcsetRules:(NSArray *)arg1 ;
-(NSURL *)resolvedURL;
-(double)aspectRatio;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSDictionary *)srcset;
@end

