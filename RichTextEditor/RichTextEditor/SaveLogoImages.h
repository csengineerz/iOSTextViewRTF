

#import <Foundation/Foundation.h>

@interface SaveLogoImages : NSObject {

}

+ (void)removeImage:(NSString*)fileName ;
+ (NSString*)loadImage:(NSString*)imageName ;
+ (void)saveImage:(UIImage*)image:(NSString*)imageName;
+ (UIImage*) resizedImage:(UIImage *)inImage width:(NSInteger)a height:(NSInteger)b;
@end
