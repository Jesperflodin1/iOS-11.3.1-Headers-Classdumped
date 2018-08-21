/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@protocol VideosExtrasCarouselCollectionViewDelegate;
@interface VideosExtrasCarouselCollectionView : UICollectionView {

	id<VideosExtrasCarouselCollectionViewDelegate> _carouselCollectionViewDelegate;

}

@property (assign,nonatomic,__weak) id<VideosExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate;              //@synthesize carouselCollectionViewDelegate=_carouselCollectionViewDelegate - In the implementation block
-(void)didAddSubview:(id)arg1 ;
-(void)setCarouselCollectionViewDelegate:(id<VideosExtrasCarouselCollectionViewDelegate>)arg1 ;
-(id<VideosExtrasCarouselCollectionViewDelegate>)carouselCollectionViewDelegate;
@end
