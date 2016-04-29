#import "LevelMeterColorThreshold.h"



@implementation LevelMeterColorThreshold

- (instancetype)initWithMaxValue:(CGFloat)maxValue color:(UIColor *)color
{
    self = [super init];
    if (self != nil) {
        _maxValue = maxValue;
        _color = color;
    }

    return self;
}

@end