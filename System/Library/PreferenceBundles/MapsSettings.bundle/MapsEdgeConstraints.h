/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLayoutConstraint;

@interface MapsEdgeConstraints : NSObject {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _rightConstraint;
	NSLayoutConstraint* _trailingConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                   //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                  //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingConstraint;               //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightConstraint;                 //@synthesize rightConstraint=_rightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingConstraint;              //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
+(id)edgeConstraintsWithTop:(id)arg1 left:(id)arg2 bottom:(id)arg3 right:(id)arg4 ;
+(id)edgeConstraintsWithTop:(id)arg1 leading:(id)arg2 bottom:(id)arg3 trailing:(id)arg4 ;
-(NSLayoutConstraint *)bottomConstraint;
-(NSLayoutConstraint *)leadingConstraint;
-(NSLayoutConstraint *)trailingConstraint;
-(NSLayoutConstraint *)topConstraint;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)allConstraints;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftConstraint;
-(NSLayoutConstraint *)rightConstraint;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
@end
