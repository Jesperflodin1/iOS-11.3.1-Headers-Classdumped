/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtrasTemplateViewController.h>
#import <VideosExtras/VideosExtrasSlideshowViewControllerDataSource.h>
#import <VideosExtras/VideosExtrasZoomingImageTransitionParticipant.h>

@class VideosExtrasSlideshowViewController, NSArray, UITapGestureRecognizer, IKSlideshowElement, NSString;

@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _overlayHidden;
	BOOL _preventNavbarAutohide;
	VideosExtrasSlideshowViewController* _slideshowViewController;
	NSArray* _imageElements;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) NSArray * imageElements;                                                    //@synthesize imageElements=_imageElements - In the implementation block
@property (nonatomic,retain) VideosExtrasSlideshowViewController * slideshowViewController;              //@synthesize slideshowViewController=_slideshowViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) IKSlideshowElement * templateElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)_handleTap:(id)arg1 ;
-(BOOL)showsPlaceholder;
-(void)setSlideshowViewController:(VideosExtrasSlideshowViewController *)arg1 ;
-(VideosExtrasSlideshowViewController *)slideshowViewController;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(IKSlideshowElement *)templateElement;
-(NSArray *)imageElements;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2 ;
-(void)setImageElements:(NSArray *)arg1 ;
-(void)_toggleVisibilityOfNavigationBar;
-(void)_firstImageLoadedHideNavigationBar;
@end
