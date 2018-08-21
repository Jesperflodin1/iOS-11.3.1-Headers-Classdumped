/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PUPhotosGridViewController.h>

@class WallpaperMagicGridViewControllerSpec, NSArray, PLWallpaperImageViewController;

@interface WallpaperMotionGridViewController : PUPhotosGridViewController {

	WallpaperMagicGridViewControllerSpec* _wallpaperSpec;
	NSArray* _photoIrisAssets;
	PLWallpaperImageViewController* _imageViewController;

}

@property (nonatomic,retain) NSArray * photoIrisAssets;                                         //@synthesize photoIrisAssets=_photoIrisAssets - In the implementation block
@property (nonatomic,retain) WallpaperMagicGridViewControllerSpec * wallpaperSpec;              //@synthesize wallpaperSpec=_wallpaperSpec - In the implementation block
@property (nonatomic,retain) PLWallpaperImageViewController * imageViewController;              //@synthesize imageViewController=_imageViewController - In the implementation block
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(BOOL)canDragOut;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(BOOL)allowSlideshowButton;
-(BOOL)canDragIn;
-(BOOL)allowsPeeking;
-(BOOL)isPreheatingEnabled;
-(BOOL)shouldShowMenu;
-(WallpaperMagicGridViewControllerSpec *)wallpaperSpec;
-(void)setImageViewController:(PLWallpaperImageViewController *)arg1 ;
-(PLWallpaperImageViewController *)imageViewController;
-(void)dismissDidSetWallpaper:(BOOL)arg1 ;
-(void)setWallpaperSpec:(WallpaperMagicGridViewControllerSpec *)arg1 ;
-(id)_irisAssetsPath;
-(id)_idForIrisAssetFilename:(id)arg1 ;
-(BOOL)_isMovieFile:(id)arg1 ;
-(void)setPhotoIrisAssets:(NSArray *)arg1 ;
-(NSArray *)photoIrisAssets;
@end
