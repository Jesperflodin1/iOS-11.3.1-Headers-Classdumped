/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, _TVImageView, TVImageElement, WLKUISportsOverlayView;

@interface WLKUISportsCellView : UIView {

	BOOL _shouldLayoutImageFirst;
	NSArray* _textRenderers;
	_TVImageView* _imageView;
	TVImageElement* _imageElement;
	_TVImageView* _appImageView;
	TVImageElement* _appImageElement;
	WLKUISportsOverlayView* _overlayView;
	CGSize _cellSize;

}

@property (assign,nonatomic) CGSize cellSize;                                   //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutImageFirst;                       //@synthesize shouldLayoutImageFirst=_shouldLayoutImageFirst - In the implementation block
@property (nonatomic,copy) NSArray * textRenderers;                             //@synthesize textRenderers=_textRenderers - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageElement * imageElement;                     //@synthesize imageElement=_imageElement - In the implementation block
@property (nonatomic,retain) _TVImageView * appImageView;                       //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,retain) TVImageElement * appImageElement;                  //@synthesize appImageElement=_appImageElement - In the implementation block
@property (nonatomic,retain) WLKUISportsOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(_TVImageView *)imageView;
-(void)setOverlayView:(WLKUISportsOverlayView *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(WLKUISportsOverlayView *)overlayView;
-(CGSize)cellSize;
-(double)_imageOffset;
-(double)_textOffset;
-(void)setCellSize:(CGSize)arg1 ;
-(TVImageElement *)imageElement;
-(void)setImageElement:(TVImageElement *)arg1 ;
-(void)layoutWithElement:(id)arg1 ;
-(void)prepareForCellReuse;
-(void)setShouldLayoutImageFirst:(BOOL)arg1 ;
-(void)setTextRenderers:(NSArray *)arg1 ;
-(double)_textHeight;
-(BOOL)shouldLayoutImageFirst;
-(NSArray *)textRenderers;
-(_TVImageView *)appImageView;
-(void)setAppImageView:(_TVImageView *)arg1 ;
-(TVImageElement *)appImageElement;
-(void)setAppImageElement:(TVImageElement *)arg1 ;
@end

