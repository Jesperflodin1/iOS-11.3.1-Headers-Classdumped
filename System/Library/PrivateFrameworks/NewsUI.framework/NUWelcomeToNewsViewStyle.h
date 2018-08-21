/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSAttributedString;

@interface NUWelcomeToNewsViewStyle : NSObject {

	UIImage* _appIconImage;
	NSAttributedString* _titleAttributedString;
	NSAttributedString* _descriptionAttributedString;

}

@property (nonatomic,readonly) UIImage * appIconImage;                                             //@synthesize appIconImage=_appIconImage - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * titleAttributedString;                    //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * descriptionAttributedString;              //@synthesize descriptionAttributedString=_descriptionAttributedString - In the implementation block
-(id)init;
-(UIImage *)appIconImage;
-(NSAttributedString *)descriptionAttributedString;
-(id)createTitleAttributedString;
-(id)createDescriptionAttributedString;
-(NSAttributedString *)titleAttributedString;
@end
