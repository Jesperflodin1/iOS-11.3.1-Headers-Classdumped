/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NUViewNode, NSString;

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell {

	NUViewNode* _thumbnailImageViewNode;
	NUViewNode* _publisherLogoImageViewNode;
	NUViewNode* _titleLabelNode;
	NUViewNode* _dateLabelNode;
	NSString* _headlineIdentifier;

}

@property (nonatomic,readonly) NUViewNode * thumbnailImageViewNode;                  //@synthesize thumbnailImageViewNode=_thumbnailImageViewNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * publisherLogoImageViewNode;              //@synthesize publisherLogoImageViewNode=_publisherLogoImageViewNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * titleLabelNode;                          //@synthesize titleLabelNode=_titleLabelNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * dateLabelNode;                           //@synthesize dateLabelNode=_dateLabelNode - In the implementation block
@property (nonatomic,copy) NSString * headlineIdentifier;                            //@synthesize headlineIdentifier=_headlineIdentifier - In the implementation block
+(id)titleLabelFont;
+(id)dateLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(NUViewNode *)titleLabelNode;
-(NUViewNode *)publisherLogoImageViewNode;
-(NUViewNode *)dateLabelNode;
-(NUViewNode *)thumbnailImageViewNode;
-(NSString *)headlineIdentifier;
-(void)setHeadlineIdentifier:(NSString *)arg1 ;
@end
