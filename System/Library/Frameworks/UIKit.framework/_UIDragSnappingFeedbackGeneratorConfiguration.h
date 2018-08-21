/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDragFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _objectSnappedFeedback;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> objectSnappedFeedback;              //@synthesize objectSnappedFeedback=_objectSnappedFeedback - In the implementation block
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)objectSnappedFeedback;
-(void)setObjectSnappedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
@end

