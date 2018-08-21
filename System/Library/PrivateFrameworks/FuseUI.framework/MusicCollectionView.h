/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class UITraitCollection;

@interface MusicCollectionView : UICollectionView {

	UITraitCollection* _cachedTraitCollection;
	BOOL _shouldTreatContentOffsetChangesAsDeltas;

}

@property (assign,nonatomic) id<MusicCollectionViewDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldTreatContentOffsetChangesAsDeltas;              //@synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas - In the implementation block
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(BOOL)shouldTreatContentOffsetChangesAsDeltas;
-(void)setShouldTreatContentOffsetChangesAsDeltas:(BOOL)arg1 ;
@end

