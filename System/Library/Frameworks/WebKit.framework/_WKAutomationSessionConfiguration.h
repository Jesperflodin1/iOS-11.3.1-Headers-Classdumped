/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying> {

	BOOL _allowsInsecureMediaCapture;
	BOOL _suppressesICECandidateFiltering;

}

@property (assign,nonatomic) BOOL allowsInsecureMediaCapture;                   //@synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture - In the implementation block
@property (assign,nonatomic) BOOL suppressesICECandidateFiltering;              //@synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsInsecureMediaCapture;
-(void)setAllowsInsecureMediaCapture:(BOOL)arg1 ;
-(BOOL)suppressesICECandidateFiltering;
-(void)setSuppressesICECandidateFiltering:(BOOL)arg1 ;
@end

