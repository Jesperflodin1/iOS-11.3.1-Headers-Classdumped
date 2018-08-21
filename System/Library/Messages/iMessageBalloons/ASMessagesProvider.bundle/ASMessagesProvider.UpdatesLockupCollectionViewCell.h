/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider18ExpandableTextView, _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider15SmallLockupView, _TtC18ASMessagesProvider11ArtworkView;

@interface ASMessagesProvider.UpdatesLockupCollectionViewCell : UICollectionViewCell {

	 expandableTextView;
	 versionMetadata;
	 lockupView;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider18ExpandableTextView * expandableTextView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * versionMetadata; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider15SmallLockupView * lockupView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * artworkView; 
@property (readonly,nonatomic) CGSize preferredArtworkSize; 
+(long long)defaultCollapsedNumberOfLines;
+(CGSize)sizeFor:(id)arg1 isCollapsed:(BOOL)arg2 fitting:(CGSize)arg3 pageTraits:(id)arg4 ;
+(CGSize)itemSizeForText:(id)arg1 isCollapsed:(BOOL)arg2 versionText:(id)arg3 layoutMargins:(UIEdgeInsets)arg4 fitting:(CGSize)arg5 collapsedNumberOfLines:(long long)arg6 for:(id)arg7 ;
+(CGSize)itemSizeForAttributedText:(id)arg1 isCollapsed:(BOOL)arg2 versionText:(id)arg3 layoutMargins:(UIEdgeInsets)arg4 fitting:(CGSize)arg5 collapsedNumberOfLines:(long long)arg6 for:(id)arg7 ;
-(_TtC18ASMessagesProvider18ExpandableTextView *)expandableTextView;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)versionMetadata;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(_TtC18ASMessagesProvider15SmallLockupView *)lockupView;
-(CGSize)preferredArtworkSize;
-(_TtC18ASMessagesProvider11ArtworkView *)artworkView;
@end

