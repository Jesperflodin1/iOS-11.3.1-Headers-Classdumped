/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class NSArray, NSMutableArray, NUIContainerStackView, NSString;

@interface TLKImagesView : TLKView <NUIContainerStackViewDelegate> {

	BOOL _paddingDisabled;
	NSArray* _images;
	NSMutableArray* _imageViews;
	NUIContainerStackView* _stackView;

}

@property (retain) NSMutableArray * imageViews;                         //@synthesize imageViews=_imageViews - In the implementation block
@property (retain) NUIContainerStackView * stackView;                   //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSArray * images;                                    //@synthesize images=_images - In the implementation block
@property (getter=isPaddingDisabled) BOOL paddingDisabled;              //@synthesize paddingDisabled=_paddingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)defaultInsets;
-(id)init;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(NUIContainerStackView *)stackView;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
-(void)setStackView:(NUIContainerStackView *)arg1 ;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(id)observableProperties;
-(void)updateWithImages:(id)arg1 ;
-(BOOL)isPaddingDisabled;
-(void)updateForPaddingDisabled:(BOOL)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)setPaddingDisabled:(BOOL)arg1 ;
@end

