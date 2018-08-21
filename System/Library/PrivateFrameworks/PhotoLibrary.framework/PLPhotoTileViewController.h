/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileCloudPlaceholderViewDelegate.h>

@protocol PLTilePlaceholderView, PLPhotoTileViewControllerDelegate, OS_dispatch_source;
@class UIImage, PHAsset, PLImageScrollView, PLExpandableImageView, PLVideoView, UIImageView, UIView, UIGestureRecognizer, NSObject, PLTileContainerView, PHCachingImageManager, NSArray, NSString;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLPhotoTileCloudPlaceholderViewDelegate> {

	UIImage* _image;
	UIImage* _pendingImage;
	UIImage* _unscaledImage;
	PHAsset* _modelPhoto;
	PLImageScrollView* _scrollView;
	PLExpandableImageView* _imageView;
	PLVideoView* _videoView;
	UIImageView* _gradientView;
	UIImageView* _reviewCheckmarkImageView;
	UIView*<PLTilePlaceholderView> _placeholderView;
	BOOL _currentTileDownloadFinished;
	UIGestureRecognizer* _singleTapGestureRecognizer;
	UIGestureRecognizer* _doubleTapGestureRecognizer;
	id<PLPhotoTileViewControllerDelegate> _tileDelegate;
	int _imageOrientation;
	CGSize _imageSize;
	CGRect _tileFrame;
	BOOL _zoomToFillInsteadOfToFit;
	BOOL _useLessThanMinZoomForZoomedOutTest;
	BOOL _allowZoomToFill;
	id _orientationDelegate;
	float _cropRectZoomScale;
	CGRect _cropOverlayRect;
	CGRect _cropRect;
	double _doubleTapZoomScale;
	double _minZoomScale;
	double _zoomToFillScale;
	int _mode;
	BOOL _clientIsTemporarilyWallpaper;
	BOOL _userDidAdjustWallpaper;
	float _wallpaperPortraitZoomScale;
	float _wallpaperLandscapeZoomScale;
	float _zoomScaleBeforeZooming;
	CGRect _cropRectBeforeDragging;
	BOOL _force1XCroppedImage;
	BOOL _forceNativeScreenScale;
	BOOL _centerContentVertically;
	/*^block*/id _didEndZoomingBlock;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	double _dispatchStartTime;
	double _dispatchTimeElapsed;
	BOOL _hasNotedZoom;
	unsigned _imageIsThumbnail : 1;
	unsigned _isTVOut : 1;
	unsigned _zooming : 1;
	unsigned _autoZooming : 1;
	unsigned _zoomGesturesEnabled : 1;
	unsigned _userDidZoom : 1;
	unsigned _ignoreZoomChange : 1;
	unsigned _tileParentIsPageController : 1;
	unsigned _lockedUnderCropOverlay : 1;
	unsigned _viewDidAppear : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didRequestFullSizeImage : 1;
	unsigned _useZoomScaleForCropRect : 1;
	unsigned _avalancheBadgeShouldBeHidden : 1;
	unsigned _badgeShouldBeVisible : 1;
	PLTileContainerView* _containerView;
	PHCachingImageManager* __cachingImageManager;
	int _fullSizeImageRequestID;
	NSArray* _customCenterOverlayConstraints;
	BOOL _shouldUpdateBadgeViewOptimalLayout;
	double _badgeViewOptimalLayoutLowestTop;
	BOOL _isLoadingFullSizeImage;
	BOOL _wantsCompactLayout;
	BOOL _reviewing;
	BOOL _picked;
	BOOL _shouldHideProgressIndicator;
	BOOL _shouldSupressViewWillTransitionToSize;
	UIView* __customCenterOverlay;
	UIEdgeInsets _overlayInsets;

}

@property (setter=_setCustomCenterOverlay:,nonatomic,retain) UIView * _customCenterOverlay;              //@synthesize _customCenterOverlay=__customCenterOverlay - In the implementation block
@property (nonatomic,readonly) PHAsset * photo; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
@property (assign,nonatomic) CGRect tileFrame; 
@property (nonatomic,retain) UIImage * unscaledImage;                                                    //@synthesize unscaledImage=_unscaledImage - In the implementation block
@property (assign,nonatomic) BOOL centerContentVertically;                                               //@synthesize centerContentVertically=_centerContentVertically - In the implementation block
@property (assign,nonatomic) UIEdgeInsets overlayInsets;                                                 //@synthesize overlayInsets=_overlayInsets - In the implementation block
@property (assign,nonatomic) BOOL forceNativeScreenScale;                                                //@synthesize forceNativeScreenScale=_forceNativeScreenScale - In the implementation block
@property (assign,nonatomic) BOOL force1XCroppedImage;                                                   //@synthesize force1XCroppedImage=_force1XCroppedImage - In the implementation block
@property (assign,nonatomic) BOOL wantsCompactLayout;                                                    //@synthesize wantsCompactLayout=_wantsCompactLayout - In the implementation block
@property (assign,nonatomic) BOOL reviewing;                                                             //@synthesize reviewing=_reviewing - In the implementation block
@property (assign,nonatomic) BOOL picked;                                                                //@synthesize picked=_picked - In the implementation block
@property (assign,nonatomic) BOOL shouldHideProgressIndicator;                                           //@synthesize shouldHideProgressIndicator=_shouldHideProgressIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldSupressViewWillTransitionToSize;                                 //@synthesize shouldSupressViewWillTransitionToSize=_shouldSupressViewWillTransitionToSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(CGSize)tileSize;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 imageRef:(CGImageRef)arg2 imageOrientation:(long long)arg3 allowZoomToFill:(BOOL)arg4 mode:(int)arg5 ;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 modelPhoto:(id)arg2 mode:(int)arg3 ;
+(BOOL)shouldShowPlaceholderForAsset:(id)arg1 ;
+(CGSize)tvOutTileSize;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 image:(id)arg2 allowZoomToFill:(BOOL)arg3 mode:(int)arg4 ;
-(PHAsset *)photo;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)loadView;
-(id)image;
-(id)scrollView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(int)imageOrientation;
-(long long)_imageOrientation;
-(BOOL)gesturesEnabled;
-(void)setGesturesEnabled:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)setZoomScale:(float)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(id)imageView;
-(BOOL)allowsEditing;
-(void)_updatePlaceholderVisibility;
-(double)minZoomScale;
-(id)videoView;
-(void)setVideoView:(id)arg1 ;
-(void)setPicked:(BOOL)arg1 ;
-(void)setTileDelegate:(id)arg1 ;
-(void)setOrientationDelegate:(id)arg1 ;
-(void)setForceNativeScreenScale:(BOOL)arg1 ;
-(void)setCropOverlayRect:(CGRect)arg1 forCropRect:(CGRect)arg2 ;
-(void)setOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)noteParentViewControllerDidDisappear;
-(void)setFullSizeImage:(id)arg1 ;
-(UIImage *)unscaledImage;
-(id)_newOriginalImageForPickerFromCachedData;
-(void)retryDownload;
-(void)updateCloudDownloadProgress:(double)arg1 ;
-(void)_viewWillMoveToSuperView:(id)arg1 ;
-(void)_updateContentInset;
-(void)_centerImageInScrollView;
-(void)_setPhoto:(id)arg1 ;
-(void)setTileFrame:(CGRect)arg1 ;
-(void)_setImage:(id)arg1 isThumbnail:(BOOL)arg2 preserveFrame:(BOOL)arg3 ;
-(void)_configureViews;
-(id)initWithModelPhoto:(id)arg1 image:(id)arg2 frame:(CGRect)arg3 isThumbnail:(BOOL)arg4 imageOrientation:(int)arg5 allowZoomToFill:(BOOL)arg6 mode:(int)arg7 ;
-(void)cancelFullSizeImageRequest;
-(void)_teardownDispatchTimer;
-(void)_updateVideoViewForModelPhoto;
-(void)_updatePlaceholderImageRect;
-(void)setZoomingGesturesEnabled:(BOOL)arg1 ;
-(void)_setCustomCenterOverlay:(id)arg1 ;
-(UIView *)_customCenterOverlay;
-(void)ensureFullSizeImageLoaded;
-(double)defaultZoomScale;
-(void)_showBadgeViewIfAppropriate;
-(void)setBadgeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_installSubview:(id)arg1 ;
-(void)_updatePlaceholderViewAnimated:(BOOL)arg1 ;
-(void)_removePlaceholderView;
-(void)_requestFullSizeImage;
-(BOOL)_clientIsWallpaper;
-(UIEdgeInsets)overlayInsets;
-(BOOL)shouldHideProgressIndicator;
-(BOOL)photoShouldHaveHDRBadge;
-(void)_setupBadgeView;
-(BOOL)photoShouldHaveAvalancheBadge;
-(void)_updateReviewCheckmark;
-(void)_updateModelPhotoWithImage:(id)arg1 ;
-(void)updateZoomScales;
-(void)_setDefaultZoomScale;
-(void)_updateAggdKeys;
-(BOOL)isTVOut;
-(BOOL)tileIsOnScreen;
-(void)setBadgeVisible:(BOOL)arg1 ;
-(void)_performDidEndZoomBlock;
-(void)_repositionBadgeView;
-(BOOL)shouldSupressViewWillTransitionToSize;
-(void)_performRotationUpdatesWithDuration:(double)arg1 size:(CGSize)arg2 ;
-(double)minRotatedScale;
-(float)_calculateZoomScale:(BOOL)arg1 inView:(id)arg2 ;
-(void)_resetZoomCommon;
-(void)_handleFullSizeImageRequestResult:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 ;
-(id)newCGImageBackedUIImage;
-(id)newImageWithCropRect:(CGRect)arg1 minimalCropDimension:(double)arg2 croppedImageData:(id*)arg3 fullScreenImageData:(id*)arg4 fullScreenImage:(CGImage*)arg5 imageCropRect:(CGRect*)arg6 intersectCropWithFullRect:(BOOL)arg7 ;
-(void)_setDidEndZoomingBlock:(/*^block*/id)arg1 ;
-(double)zoomToFillScale;
-(void)_adjustScrollViewContentOffsetForInsets;
-(BOOL)isZoomedOut;
-(void)_adjustZoomForEnteringMode:(BOOL)arg1 ;
-(void)setReviewing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupReviewCheckmark;
-(id)initForPageController;
-(id)initWithModelPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(CGSize)arg3 ;
-(CGRect)tileFrame;
-(void)forceZoomingGesturesEnabled;
-(id)expandableImageView;
-(void)updateCenterOverlay;
-(void)hideContentView;
-(void)showContentView;
-(id)tileDelegate;
-(void)setTVOut:(BOOL)arg1 ;
-(BOOL)userDidAdjustWallpaper;
-(void)setClientIsWallpaper:(BOOL)arg1 ;
-(void)setAvalancheBadgesHidden:(BOOL)arg1 ;
-(void)installVideoOverlay:(id)arg1 ;
-(void)setShouldHideProgressIndicator:(BOOL)arg1 ;
-(void)refreshTileWithFullScreenImage:(id)arg1 modelPhoto:(id)arg2 ;
-(void)didLoadImage;
-(void)showErrorPlaceholderView;
-(BOOL)hasFullSizeImage;
-(void)updateForVisibleOverlays:(BOOL)arg1 ;
-(id)dictionaryWithCroppedImageForRect:(CGRect)arg1 minimalCropDimension:(double)arg2 withOptions:(int)arg3 ;
-(void)zoomToScale:(double)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)zoomToFitScale;
-(double)currentToMinZoomRatio;
-(double)currentToDefaultZoomRatio;
-(void)setAllowsZoomToFill:(BOOL)arg1 ;
-(void)updateAfterCollapse;
-(void)setLockedUnderCropOverlay:(BOOL)arg1 ;
-(void)setReviewing:(BOOL)arg1 ;
-(BOOL)centerContentVertically;
-(BOOL)wantsCompactLayout;
-(void)setWantsCompactLayout:(BOOL)arg1 ;
-(BOOL)reviewing;
-(BOOL)picked;
-(void)_updateSubviewOrdering;
-(id)cachingImageManager;
-(BOOL)forceNativeScreenScale;
-(BOOL)force1XCroppedImage;
-(void)_handleDoubleTap:(id)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setShouldSupressViewWillTransitionToSize:(BOOL)arg1 ;
-(void)setCenterContentVertically:(BOOL)arg1 ;
-(void)setForce1XCroppedImage:(BOOL)arg1 ;
-(void)setUnscaledImage:(UIImage *)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
-(void)resetZoom;
@end

