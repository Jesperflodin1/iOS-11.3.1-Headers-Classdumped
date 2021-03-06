/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKit/UIView.h>

@class CAStateController, CALayer, CAPackage, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView {

	CAStateController* _stateController;
	CALayer* _packageLayer;
	CAPackage* _package;
	CCUICAPackageDescription* _packageDescription;

}

@property (nonatomic,retain) CAPackage * package;                                        //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * packageDescription;              //@synthesize packageDescription=_packageDescription - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStateName:(id)arg1 ;
-(void)setPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)_setPackage:(id)arg1 ;
-(CCUICAPackageDescription *)packageDescription;
-(CAPackage *)package;
@end

