/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIButton.h>

@class PKBarcode, UIImage, UIImageView, NSMutableArray, UILabel, UIView;

@interface PKBarcodeStickerView : UIButton {

	PKBarcode* _barcode;
	UIImage* _barcodeImage;
	UIImageView* _matteView;
	UIImageView* _barcodeView;
	NSMutableArray* _stickerConstraints;
	NSMutableArray* _matteConstraints;
	UILabel* _altTextLabel;
	long long _layoutMode;
	BOOL _drawBarcode;
	long long _validity;

}

@property (assign,nonatomic) long long validity;                //@synthesize validity=_validity - In the implementation block
@property (nonatomic,readonly) UIView * matteView;              //@synthesize matteView=_matteView - In the implementation block
+(CGSize)_sizeForBarcode:(id)arg1 ;
+(PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateValidity;
-(id)initWithBarcode:(id)arg1 validityState:(long long)arg2 layoutMode:(long long)arg3 ;
-(void)setValidity:(long long)arg1 ;
-(CGSize)_varianceForBarcode:(id)arg1 ;
-(id)barcodeImage;
-(id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)_updateDrawBarcode;
-(void)_generateMatteRect:(CGRect*)arg1 barcodeRect:(CGRect*)arg2 altTextRect:(CGRect*)arg3 boundingSize:(CGSize)arg4 ;
-(long long)validity;
-(UIView *)matteView;
@end

