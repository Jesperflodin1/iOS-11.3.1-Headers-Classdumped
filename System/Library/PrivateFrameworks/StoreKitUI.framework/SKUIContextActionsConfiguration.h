/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

@interface SKUIContextActionsConfiguration : NSObject {

	SKUIContextActionsPresentationSource* _presentationSource;
	SKUIDialogTemplateViewElement* _dialogTemplate;

}

@property (nonatomic,retain) SKUIDialogTemplateViewElement * dialogTemplate;                         //@synthesize dialogTemplate=_dialogTemplate - In the implementation block
@property (nonatomic,retain) SKUIContextActionsPresentationSource * presentationSource;              //@synthesize presentationSource=_presentationSource - In the implementation block
-(void)setPresentationSource:(SKUIContextActionsPresentationSource *)arg1 ;
-(SKUIContextActionsPresentationSource *)presentationSource;
-(id)contextActions;
-(SKUIDialogTemplateViewElement *)dialogTemplate;
-(id)initWithDialogTemplate:(id)arg1 ;
-(id)_resourceImageForImageElement:(id)arg1 ;
-(void)setDialogTemplate:(SKUIDialogTemplateViewElement *)arg1 ;
@end

