//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBFileOptions, GSDK_PBMutableArray, GSDK_PBSourceCodeInfo, NSString;

@interface GSDK_PBFileDescriptorProto : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GSDK_PBMutableArray *dependencyArray; // @dynamic dependencyArray;
@property(retain, nonatomic) GSDK_PBMutableArray *enumTypeArray; // @dynamic enumTypeArray;
@property(retain, nonatomic) GSDK_PBMutableArray *extensionArray; // @dynamic extensionArray;
@property(nonatomic) _Bool hasDependencyArray; // @dynamic hasDependencyArray;
@property(nonatomic) _Bool hasEnumTypeArray; // @dynamic hasEnumTypeArray;
@property(nonatomic) _Bool hasExtensionArray; // @dynamic hasExtensionArray;
@property(nonatomic) _Bool hasMessageTypeArray; // @dynamic hasMessageTypeArray;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasPackage; // @dynamic hasPackage;
@property(nonatomic) _Bool hasPublicDependencyArray; // @dynamic hasPublicDependencyArray;
@property(nonatomic) _Bool hasServiceArray; // @dynamic hasServiceArray;
@property(nonatomic) _Bool hasSourceCodeInfo; // @dynamic hasSourceCodeInfo;
@property(nonatomic) _Bool hasSyntax; // @dynamic hasSyntax;
@property(nonatomic) _Bool hasWeakDependencyArray; // @dynamic hasWeakDependencyArray;
@property(retain, nonatomic) GSDK_PBMutableArray *messageTypeArray; // @dynamic messageTypeArray;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GSDK_PBFileOptions *options; // @dynamic options;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) GSDK_PBMutableArray *publicDependencyArray; // @dynamic publicDependencyArray;
@property(retain, nonatomic) GSDK_PBMutableArray *serviceArray; // @dynamic serviceArray;
@property(retain, nonatomic) GSDK_PBSourceCodeInfo *sourceCodeInfo; // @dynamic sourceCodeInfo;
@property(retain, nonatomic) NSString *syntax; // @dynamic syntax;
@property(retain, nonatomic) GSDK_PBMutableArray *weakDependencyArray; // @dynamic weakDependencyArray;

@end

