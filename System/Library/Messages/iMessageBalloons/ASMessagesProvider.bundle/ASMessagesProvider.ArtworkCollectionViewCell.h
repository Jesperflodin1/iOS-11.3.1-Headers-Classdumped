/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider11ArtworkView;

@interface ASMessagesProvider.ArtworkCollectionViewCell : UICollectionViewCell {

	 artworkView;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * artworkView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * imageView; 
@property (readonly,nonatomic) CGSize preferredArtworkSize; 
+(CGSize)sizeFor:(id)arg1 fitting:(CGSize)arg2 pageTraits:(id)arg3 isSeparatorHidden:(BOOL)arg4 ;
+(double)artworkHeightFromScreenSize:(CGSize)arg1 pageTraits:(id)arg2 isArtworkPortrait:(BOOL)arg3 ;
+(CGSize)itemSizeFor:(id)arg1 screenSize:(CGSize)arg2 borderWidth:(double)arg3 pageTraits:(id)arg4 fitting:(CGSize)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(_TtC18ASMessagesProvider11ArtworkView *)imageView;
-(CGSize)preferredArtworkSize;
-(_TtC18ASMessagesProvider11ArtworkView *)artworkView;
@end

